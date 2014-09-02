OpenWeatherMap-OSX-IOS
======================

OpenWeatherMap is dedicated framework for openweathermap.org service for OSX and IOS. 
It helps to write your code really fast without reading documentation, just save your time!


#What do you need?#

At least you need to select which version you want and download appropriate framework for your platform:


* [OpenWeatherMap-OSX](https://github.com/jacekgrygiel/OpenWeatherMap-OSX-IOS/tree/master/OpenWeatherFramework/IOS)
* [OpenWeatherMap-IOS](https://github.com/jacekgrygiel/OpenWeatherMap-OSX-IOS/tree/master/OpenWeatherFramework/OSX)

* [Documentation](https://github.com/jacekgrygiel/OpenWeatherMap-OSX-IOS/tree/master/OpenWeatherFramework/Documentation)

#How to use it#

Framework provides few different requests and responses, all in details you can find in documentation. Simply it :

* Initialization APIService with needed information:

```objective-c
    Language *language = [[Language alloc] initWithLanguageType:LanguagePolish];
    [[APIService sharedInstance] setApiLanguage:language];
    [[APIService sharedInstance] setHostApiPath: @"http://api.openweathermap.org/data/2.5"];
    [[APIService sharedInstance] setAppId: @"API_KEY"];// you should go to openweathermap.org page and create account with plan 
    [[APIService sharedInstance] setUnitType:@"metric"];//imperial
```

*
