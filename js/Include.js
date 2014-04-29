console.log("Include.js loaded!");


if(typeof Common !== 'object') Common =  {};
if(typeof Common.Util !== 'object') Common.Util = {};

if(typeof Common.Util.Include === 'undefined')
{
    Common.Util.Include = (function()
        {
            var loadedList = [];
            function JavaScript () {

            };

            JavaScript.prototype = {
                run: function(includeFiles, initWidget)
                {
                    console.log("JavaScript.run("+includeFiles+", initWidget)");

                    // Adding the script tag to the head as suggested before
                    var head = document.getElementsByTagName('head')[0];
                    var script = document.createElement('script');
                    script.type = 'text/javascript';
                    script.src = includeFiles;

                    // Then bind the event to the callback function.
                    // There are several events for cross browser compatibility.
                    script.onreadystatechange = function(e){
                        console.log(includeFiles + ':' + e);
                    };
                    script.onload = initWidget;

                    // Fire the loading
                    head.appendChild(script);

                    loadedList.push(includeFiles);
                }
            };


            return {
                JavaScript: JavaScript
            };
        })();
}



window.screen = {
    width: 960,
    height: 540,
    innerWidth: 960,
    innerHeight: 540
};



