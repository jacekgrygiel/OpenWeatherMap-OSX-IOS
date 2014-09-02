//
//  Weather.h
//  OpenWeatherMap Universal Framework
//
//  Created by Jacek Grygiel on 24/04/14.
//  Copyright (c) 2014 JacekGrygiel. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OWMBasicModel.h"

@interface OWMWeather : OWMBasicModel
@property(nonatomic, assign) long long identifier;
@property(nonatomic, strong) NSString* main;
@property(nonatomic, strong) NSString* descriptionObj;
@property(nonatomic, strong) NSString* icon;

@end
