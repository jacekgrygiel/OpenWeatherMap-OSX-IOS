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

* Initialization OWMAPIService with needed information:

```objective-c
    Language *language = [[Language alloc] initWithLanguageType:LanguagePolish];
    [[OWMAPIService sharedInstance] setApiLanguage:language];
    [[OWMAPIService sharedInstance] setHostApiPath: @"http://api.openweathermap.org/data/2.5"];
    [[OWMAPIService sharedInstance] setAppId: @"API_KEY"];// you should go to openweathermap.org page and create account with plan 
    [[OWMAPIService sharedInstance] setUnitType:@"metric"];//imperial
```

* Search weather for city by name:

```objective-c

    [[OWMAPIService sharedInstance] searchWeatherCityByName:@"London" withCompletion:^(id sourceData, id model, NSError *error) {
        
        OWMCityWeather *cityWeather = (OWMCityWeather*) model;
        
        
    }];
```
* Search cities by coordinats
