console.log("ime2.js loaded!");

IMEShell = window.IMEShell ||
(function()
{
    var IMEShell = function()
    {

    }

    var xhr = new XMLHttpRequest();
    xhr.open("GET", "qrc:///samsung/html/ime.html", false);
    xhr.onreadystatechange = function(obj)
    {
        if(xhr.status == 0 || (xhr.status == 200 && xhr.readyState == 4))
        {
            document.write(xhr.responseText);
        }
    }

    xhr.send(null);

    return IMEShell;


})();

