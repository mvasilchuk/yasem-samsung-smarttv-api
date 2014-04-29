console.log("Plugin.js loaded!");


if(typeof Common !== 'object') Common =  {};
if(typeof Common.API !== 'object') Common.API = {};
if(typeof Common.API.Plugin === 'undefined')
{
    Common.API.Plugin = (function()
        {
            function api()
            {

            }

            api.prototype = {
                setOnWatchDog: function() {},
                setOffWatchDog: function() {},
                setOnOSDState: function() {},
                setOffOSDState: function() {},
                registKey: function() {},
                unregistKey: function() {},
                registIMEKey: function() {},
                unregistIMEKey: function() {},
                registAllKey: function() {},
                unregistAllKey: function() {},
                registFullWidgetKey: function() {},
                registPartWidgetKey: function() {},
                SetBannerState: function() {},
                ShowTools: function() {},
                setOnIdleEvent: function() {},
                setOffIdleEvent: function() {},
                setOnScreenSaver: function() {},
                setOffScreenSaver: function() {},
                isViewerKey: function() {},
                setOnFullScreen: function() {},
                setOffFullScreen: function() {},
            }

            window.curWidget = {
                id: 'widget-id',
                setPreference: function(name, value) {
                    console.log("curWidget::setPreference("+name+", "+value+")");
                }
            };

            //var search = '?country=US&lang=en&modelid=13_FOXP&server=1&area=USA&product=0&mgrver=0.1&id=cp_id&pw=cp_pass';

            /*
              Page will be reloaded when window.location.search is changed!
             */

            //if(search !== window.location.search)
            //    window.location.search = search;

            return api;
        })();
}





/*
country	Serviced country code (e.g. KR, US, GB, IT, AU etc.)
lang	Setting language code (e.g. en, ko, fr etc.)
modelid	TV Device model code (e.g. 13_FOXP, 13_X14 etc.)
server	Connection server Type (operating : 0, development : 1)
area	TV release destination (e.g USA, KOR, PANEURO etc.)
product	Product Type (TV: 0, Monitor: 1, BD: 2)
mgrver	Widget Manager version
id	CP account ID connection to SSO
pw	CP account Password connection to SSO
*/



/*****************************   patches    ****************************************/

(function()
{
    XMLHttpRequest.prototype.destroy = function(){
        delete this;
    };


})();



/*****************************  FileSystem  ****************************************/

function FileSystem()
{

};

FileSystem.prototype.openCommonFile = function(name, access)
{
    return new File(name, access);
}

FileSystem.prototype.closeCommonFile = function(file)
{
    if(this.__file)
        __FileSystem__.closeFile(file);
}

FileSystem.prototype.deleteCommonFile = function(path)
{
    return true;
}

FileSystem.prototype.createCommonDir = function(path, access)
{
    return this.openCommonFile(path, access);
}

FileSystem.prototype.createCommonDir = function(path, access)
{
    return this.openCommonFile(path, access);
}

FileSystem.prototype.isValidCommonPath = function(path)
{
    return __FileSystem__.fileExists(path);
};

function File(name, access)
{
    this.name = __FileSystem__.path()+ '/' + (typeof name !== 'undefined' ? name : '');
    console.log("File::constructor("+ this.name +", "+access+")");
    this.access = access;
    this.__file = __FileSystem__.openFile(this.name, access);
    //console.log(this.__file);
}


File.prototype.readLine = function()
{
    if(this.__file)
    {
        var res = __FileSystem__.readLine(this.__file);
        //console.log(res);
        if(res !== "")
            return res;
    }
    return null;
}

File.prototype.writeLine = function(line)
{

}

File.prototype.writeAll = function(data)
{

}



File.prototype.readAll = function()
{
    if(this.__file)
    {
        var res = __FileSystem__.readAll(this.__file);
        //console.log(res);
        if(res !== "")
            return res;
    }
    return null;
}



FileSystem.prototype.readDir = function(name)
{
    console.log("File::readDir("+name+")");
}


FileSystem.prototype.openFile = function(name, access)
{
    return new File(name, access);
}


FileSystem.prototype.closeFile = function(file)
{
    if(this.__file)
        __FileSystem__.closeFile(file);
}


