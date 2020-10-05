import 'package:flutter/material.dart';

class HomePage extends StatefulWidget {

  final String username;
  final String password;

  const HomePage({Key key, this.username, this.password}) : super(key: key);

  @override
  _HomePageState createState() => _HomePageState();
}

class _HomePageState extends State<HomePage> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text('HomePage'),
        backgroundColor: Colors.orange,
      ),
      body: Column(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: <Widget>[
          Text('username kita : ${widget.username}'),
          Text('password kita : ${widget.password}'),
        ],
      ),
    );
  }
}
