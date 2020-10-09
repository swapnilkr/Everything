// This is some faetures of backboneJs shown here and it will be helpful for some beginners

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>BackboneJS</title>
    <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.5.2/css/bootstrap.min.css" 
    integrity="sha384-JcKb8q3iqJ61gNV9KGb8thSsNjpSL0n8PARn9HuZOnIxN0hoP+VmmDGMN5t9UJ0Z" crossorigin="anonymous">

    <!-- <script src="backbone.js"></script> -->
    <script src="jquery-3.5.1.js"></script>
    <script src="underscore.js" ></script>
    <script src="backbone.js"></script>
</head>
<body>
    <h1 style="text-align: center;">Welcome to BackboneJS</h1>
    <h2 id="headtag" style="text-align: center;"></h2>
    <div class='hello' style="text-align: center;"></div>

    <script type="text/html" id="eventTemplate">
        <button id="btn" >Event Called</button>
    </script>

    <script type="text/template" id="temp">
        <!-- <%= name %> <%= dept %> <%= college %> -->

        <% var a=10; if (a>0) { %>
            <%= name%>
        <% } else { %>
            <%= dept %>
        <% } %>
    </script>

    <script>
        $(document).ready(function(){
            
            var MyView=Backbone.View.extend({
                tagName:'h2',
                template:_.template($('#temp').html()), //we can also use button tags in the templates
                initialize:function(){
                    // this.render()
                },
                events:{
                    'mouseover #btn':'onclick'
                },
                onclick:function(){
                    console.log('Event Triggered')
                },
                model:myModel,
                render:function(){
                   // console.log('hello...welcome to backbone js')
                   
                 //this.$el.html(this.template())
                 if(myModel.hasChanged()){
                    console.log('change effected')
                }
                else{
                    console.log('no change')
                }
                 $('#headtag').html('This is h2 tag')
                 console.log(this.model.escape('name'))
                 console.log(this.model.has('name'))
                 this.$el.html(this.template(this.model.toJSON()))
                //  console.log(this.$el)

                this.listenTo(this.myModel,'change',this.modelChange)
                console.log(this.model.toJSON())
                // this.$el.html('This is a demo jquery dom element')
                 return this
                },

                modelChange:function(){
                    console.log('model has been changed')
                }
            })

            var view=new MyView({
                 el:'.hello',
                // model:myModel
            })
            view.render();
        })

        var MyModel=Backbone.Model.extend({
            defaults:{
                name:'Amit',
                roll:127,
                dept:'cse',
                college:'aot'
            },
            initialize:function(){
                console.log('This is model in backbone js')
                this.bind('change',function(model){
                    console.log('model changed')
                })
            },
            validate:function(attribute){
                if(attribute.roll<0)
                    return "roll not valid"
            }
        })
        
        var cmodel=MyModel.extend({
            method:function(){
                console.log('this is cmod method')
            }
        })

        var cmod = new cmodel({})

        var myModel=new MyModel({
            // name:'Amit Mitra',
            // dept:'cse',
            // college:'aot'
        })
        // model.set({
        //     name:'Amit Mitra',
        //     dept:'cse'
        // })    
        
    </script>

   
</body>
</html>
