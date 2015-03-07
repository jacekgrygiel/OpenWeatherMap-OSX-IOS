//
//  Main.h
//  OpenWeatherMap Universal Framework
//
//  Created by Jacek Grygiel on 24/04/14.
//  Copyright (c) 2014 JacekGrygiel. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OWMWeather.h"
#import "OWMBasicModel.h"

@interface OWMMain : OWMBasicModel
@property(nonatomic, assign) float temp;
@property(nonatomic, assign) float temp_min;
@property(nonatomic, assign) float temp_max;
@property(nonatomic, assign) long pressure;
@property(nonatomic, assign) long humidity;
@property(nonatomic, assign) float temp_kf;
@property(nonatomic, assign) float sea_level;
@property(nonatomic, assign) float grnd_level;
@property(nonatomic, strong) NSString *url;
@property(nonatomic, strong) OWMWeather *weather;
@end
