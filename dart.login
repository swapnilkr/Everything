
import 'package:flutter/material.dart';
import 'package:simple_login/home.dart';

void main(){
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Login App',
      theme: ThemeData(primarySwatch: Colors.orange),
      home: LoginPage(),
    );
  }
}

class LoginPage extends StatelessWidget {

  //knp make final karna controller ini biar g bisa di ubah2
  final _usernameController = TextEditingController();
  final _passwordController = TextEditingController();

  final _formKey = GlobalKey<FormState>();

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(title: Text('Masuk', style: TextStyle(color: Colors.white),), centerTitle: true),
      body: Padding(
        padding: const EdgeInsets.all(16.0),
        child: Form(
          key: _formKey, // seperti id
          child: Column(
            children: [
              TextFormField(
                validator: (valeu){
                  if(valeu.isEmpty){
                    return 'Please Input Username';
                  }
                  return null;
                }, //Validarot guna untuk memastikan atau menggechek kosong atau tidak nya
                controller: _usernameController,
                decoration: InputDecoration(hintText: 'Enter Name Or Email'),
              ),
              TextFormField(
                validator: (valeu){
                  if(valeu.isEmpty){
                    return 'Please Input Password';
                  }
                  return null;
                },
                obscureText: true,//biar munculnya titik titik
                controller: _passwordController,
                decoration: InputDecoration(hintText: 'Enter Password'),
                maxLength: 16, //MAX KARAKTER (KARAKTER BISA HURUP BISA ANGKA)
              ),

              RaisedButton(
                child: Text('Login', style: TextStyle(color: Colors.white),),
                color: Colors.orangeAccent,
                disabledColor: Colors.orangeAccent,//klo di pencet ubah nanti
                onPressed: (){


                  //cek apakah username nya harits password nya 09876
                  //cek password nya <5 : g bisa login , >5 bisa login

                  String username = _usernameController.text;
                  String password = _passwordController.text;
                  if(_formKey.currentState.validate()){
                    if( username != 'Harits'){
                      print('Username salah');
                    }else if( password != '12345'){
                      print('Password salah');
                    }else{
                      Navigator.push(context, MaterialPageRoute(builder: (context) => HomePage(
                        username: _usernameController.text,
                        password: _passwordController.text,)));
                    }
                  }
                },
              )
            ],
          ),
        ),
      ),
    );
  }
}
