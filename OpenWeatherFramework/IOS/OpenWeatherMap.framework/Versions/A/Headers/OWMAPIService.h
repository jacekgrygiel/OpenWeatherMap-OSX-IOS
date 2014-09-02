//
//  APIService.h
//  OpenWeatherMap Universal Framework
//
//  Created by Jacek Grygiel on 24/04/14.
//  Copyright (c) 2014 JacekGrygiel. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>
#import "OWMLanguage.h"

#define kAPIWeather @"weather"
#define kAPIForecast @"forecast"
#define kAPIForecastDaily @"forecast/daily"
#define kAPIFind @"find"
#define kAPIBox @"box"


typedef void(^CompletionBlockWithObject)(id sourceData, id model, NSError*);

@interface OWMAPIService : NSObject

+ (id) sharedInstance;


/**
 *  Request for weather by city name
 *
 *  @param cityname   full city name should be given
 *  @param completion response is given with CityWeather model
 */

- (void) searchWeatherCityByName:(NSString*) cityname withCompletion:(CompletionBlockWithObject) completion;


/**
 *  Request for weather in city with lat and lon parameters
 *
 *  @param coordinate geographic coordinats should be given for defined location
 *  @param completion response is given with CityWeather model
 */
- (void) searchWeatherCityByGeographicCoordinats:(CLLocationCoordinate2D)coordinate withCompletion:(CompletionBlockWithObject)completion;


/**
 *  Request for searching city with name
 *
 *  @param cityname   full city name should be given
 *  @param completion response is given with City object
 */
- (void) searchCityByName:(NSString*) cityname withCompletion:(CompletionBlockWithObject) completion;


/**
 *  Request for searching city weathers with bbox
 *
 *  @param leftTopCoordinate     CLLLocationCoordinate2D for left top corner
 *  @param rightBottomCoordinate CLLLocationCoordinate2D for right bottom corner
 *  @param zoomLevel             zooming level
 *  @param completion            response is given with CityWeather object
 */
- (void) searchCitiesByCoordinatsLeftTop:(CLLocationCoordinate2D) leftTopCoordinate rightBottom:(CLLocationCoordinate2D) rightBottomCoordinate andZoomMap:(float) zoomLevel withCompletion:(CompletionBlockWithObject)completion;

/**
 *  Request for searching forecast for particular city with name
 *
 *  @param cityname   full city name should be given
 *  @param completion response is given with CityForecast object
 */
- (void) searchForecastForCityByName:(NSString*) cityname withCompletion:(CompletionBlockWithObject) completion;


/**
 *  Request for searching daily forecast for particular city
 *
 *  @param cityname   full city name should be given
 *  @param days       define for how many days do you want to get forecast
 *  @param completion response is given with CityForecastDaily object
 */

- (void) searchForecastDailyForCityByName:(NSString*) cityname forDays:(NSInteger) days withCompletion:(CompletionBlockWithObject) completion;

/* This function provides html string with weather for latitude and longitude parameters
   html string can be used for displaying webpage for example with UIWebView
 */

/**
 *  Function provides HTML string with weather for latitude and longitude parameters, html string can be used for display webpage for example with UIWebView
 *
 *  @param coordinate CLLLocationCoordinate2D for location coordinats
 *
 *  @return response is given with NSString object, can be used in UIWebView
 */
- (NSString*) htmlStringWithDailyWeatherByGeographicCoordinats:(CLLocationCoordinate2D) coordinate;


/**
 *  Functions provides NSURL for appropriate layer with weather, can be used in UIWebView
 *
 *  @return response is given with NSURL
 */
- (NSURL*) urlWithWeather;

/**
 *  Functions provides NSURL for appropriate layer with weather and station, can be used in UIWebView
 *
 *  @return response is given with NSURL
 */
- (NSURL*) urlWithWeatherAndStations;
/**
 *  Functions provides NSURL for appropriate layer with cloud weather, can be used in UIWebView
 *
 *  @return response is given with NSURL
 */
- (NSURL*) urlWithCloudsWeather;
/**
 *  Functions provides NSURL for appropriate layer with quantity weather, can be used in UIWebView
 *
 *  @return response is given with NSURL
 */
- (NSURL*) urlWithQuantityWeather;
/**
 *  Functions provides NSURL for appropriate layer with sea level weather, can be used in UIWebView
 *
 *  @return response is given with NSURL
 */
- (NSURL*) urlWithSeaLevelWeather;
/**
 *  Functions provides NSURL for appropriate layer with snow weather, can be used in UIWebView
 *
 *  @return response is given with NSURL
 */
- (NSURL*) urlWithSnowWeather;
/**
 *  Functions provides NSURL for appropriate layer with temperature weather, can be used in UIWebView
 *
 *  @return response is given with NSURL
 */
- (NSURL*) urlWithTemperatureWeather;
/**
 *  Functions provides NSURL for appropriate layer with wind weather, can be used in UIWebView
 *
 *  @return response is given with NSURL
 */
- (NSURL*) urlWithWindWeather;


/**
 *  Property for set the language
 */
@property(nonatomic, retain) OWMLanguage *apiLanguage;

/**
 *  Property for set API host
 */
@property(nonatomic, retain) NSString *hostApiPath;

/**
 *  Property for set API Key provided by openweathermap.org
 */

@property(nonatomic, retain) NSString *appId;

/**
 *  Property for set unit type, metric or imperial
 */
@property(nonatomic, retain) NSString *unitType;

@end
