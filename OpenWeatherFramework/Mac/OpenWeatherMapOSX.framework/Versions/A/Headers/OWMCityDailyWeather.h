//
//  CityDailyWeather.h
//  OpenWeatherMap Universal Framework
//
//  Created by Jacek Grygiel on 28/04/14.
//  Copyright (c) 2014 JacekGrygiel. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OWMWeather.h"
#import "OWMBasicModel.h"


@interface OWMCityDailyWeather : OWMBasicModel
@property(nonatomic, assign) long  clouds;
@property(nonatomic, assign) long humidity;
@property(nonatomic, assign) long dt;
@property(nonatomic, assign) float speed;
@property(nonatomic, assign) float rain;
@property(nonatomic, assign) float snow;
@property(nonatomic, assign) float wind;
@property(nonatomic, assign) float temp_eve;
@property(nonatomic, assign) float temp_min;
@property(nonatomic, assign) float temp_night;
@property(nonatomic, assign) float temp_day;
@property(nonatomic, assign) float temp_morn;
@property(nonatomic, assign) float temp_max;
@property(nonatomic, assign) float pressure;
@property(nonatomic, assign) long deg;
@property(nonatomic, strong) OWMWeather *weather;


@end
