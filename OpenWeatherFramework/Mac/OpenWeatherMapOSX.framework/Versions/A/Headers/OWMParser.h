//
//  Parser.h
//  OpenWeatherMap Universal Framework
//
//  Created by Jacek Grygiel on 24/04/14.
//  Copyright (c) 2014 JacekGrygiel. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OWMCityWeather.h"
#import "OWMCityForecast.h"
#import "OWMCityForecastDaily.h"

@interface OWMParser : NSObject

+ (id) parseWeatherData:(NSDictionary*) dictionaryData;
+ (id) parseFindCityData:(NSDictionary*) dictionaryData;
+ (id) parseForecastData:(NSDictionary*) dictionaryData;
+ (id) parseForecastDailyData:(NSDictionary*) dictionaryData;

@end
