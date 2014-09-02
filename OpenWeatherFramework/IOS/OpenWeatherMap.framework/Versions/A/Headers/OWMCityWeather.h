//
//  CityWeather.h
//  OpenWeatherMap Universal Framework
//
//  Created by Jacek Grygiel on 24/04/14.
//  Copyright (c) 2014 JacekGrygiel. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "OWMBasicModel.h"
#import "OWMSys.h"
#import "OWMWeather.h"
#import "OWMMain.h"
#import "OWMWind.h"
#import "OWMRain.h"
#import "OWMSnow.h"
#import "OWMCloud.h"


@interface OWMCityWeather : OWMBasicModel


/**
 *   Sys object consists of country, message time, sunrise, sunset time
 */
@property(nonatomic, strong) OWMSys *sys;
/**
 *   Wind object consists of speed, degree and gust
 */
@property(nonatomic, strong) OWMWind *wind;
/**
 *   Weather object consists of identifier, main, description and icon
 */
@property(nonatomic, strong) OWMWeather *weather;
/**
 *   Rain object consists of three hours prediction
 */
@property(nonatomic, strong) OWMRain *rain;
/**
 *   Snow object consists of three hours prediction
 */
@property(nonatomic, strong) OWMSnow *snow;
/**
 *   Main object consists of temperature (norm, min, max), pressure, humidity, sea level, ground level, url, and weather object
 */
@property(nonatomic, strong) OWMMain *main;
/**
 *  Cloud object consists of all clouds value
 */
@property(nonatomic, strong) OWMCloud *cloud;

@property(nonatomic, strong) NSString *base;
@property(nonatomic, assign) long long dt;
@property(nonatomic, assign) NSString *dt_txt;
@property(nonatomic, assign) long long identifier;
@property(nonatomic, strong) NSString *name;
@property(nonatomic, assign) long cod;
@property(nonatomic, assign) float lat;
@property(nonatomic, assign) float lon;
@end
