//
//  CityForecast.h
//  OpenWeatherMap Universal Framework
//
//  Created by Jacek Grygiel on 25/04/14.
//  Copyright (c) 2014 JacekGrygiel. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OWMCity.h"
#import "OWMWeather.h"
#import "OWMBasicModel.h"

@interface OWMCityForecast : OWMBasicModel
@property(nonatomic, strong) OWMCity *city;
@property(nonatomic, assign) long long cnt;
@property(nonatomic, assign) float message;
@property(nonatomic, strong) NSMutableArray *list;

@end
