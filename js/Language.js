console.log("Language.js loaded!");


if(typeof Common !== 'object') Common =  {};
if(typeof Common.Util !== 'object') Common.Util = {};

if(typeof Common.Util.Language === 'undefined')
{
    Common.Util.Language = (function()
    {
        return {};
    })();
}
