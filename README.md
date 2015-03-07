OpenWeatherMap-OSX-IOS
======================

OpenWeatherMap is dedicated framework for openweathermap.org service for OSX and IOS. 

It helps to write your code really fast without reading documentation, just save your time!

Fell free to leave the comments and suggestions!

#What do you need?#

At least you need to select which version you want and download appropriate framework for your platform:


* [OpenWeatherMap-OSX](https://github.com/jacekgrygiel/OpenWeatherMap-OSX-IOS/tree/master/OpenWeatherFramework/IOS)
* [OpenWeatherMap-IOS](https://github.com/jacekgrygiel/OpenWeatherMap-OSX-IOS/tree/master/OpenWeatherFramework/OSX)

* [Documentation](https://github.com/jacekgrygiel/OpenWeatherMap-OSX-IOS/tree/master/OpenWeatherFramework/Documentation/html)

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

```objective-c

    [[OWMAPIService sharedInstance] searchWeatherCityByGeographicCoordinats:CLLocationCoordinate2DMake(50.0, 50.0) withCompletion:^(id sourceData, id model, NSError *error) {
    
     
    }];
```

* Search cities by coordinats

```objective-c

    [[OWMAPIService sharedInstance] searchCityByName:@"London" withCompletion:^(id sourceData, id model, NSError *error) {
        
    }];
```

* Search cities by coordinats box ( left top corner and right bottom corner )

```objective-c
    
    [[OWMAPIService sharedInstance] searchCitiesByCoordinatsLeftTop:CLLocationCoordinate2DMake(10.0, 10.0) rightBottom:CLLocationCoordinate2DMake(20.0, 20.0) andZoomMap:5.0 withCompletion:^(id sourceData, id model, NSError *error) {
    
    }];
```
   
* Search forecast weather

```objective-c

    [[OWMAPIService sharedInstance] searchForecastForCityByName:@"London" withCompletion:^(id sourceData, id model, NSError *error) {
        
    }];
    
    
    [[OWMAPIService sharedInstance] searchForecastDailyForCityByName:@"London" forDays:7 withCompletion:^(id sourceData, id model, NSError *error) {
        
    }];
    
```

* HTML feature string :)

```objective-c
    NSString *html = [[OWMAPIService sharedInstance] htmlStringWithDailyWeatherByGeographicCoordinats:CLLocationCoordinate2DMake(59.33258,18.0649)];
    [self.webview loadHTMLString:html baseURL:nil];
```
