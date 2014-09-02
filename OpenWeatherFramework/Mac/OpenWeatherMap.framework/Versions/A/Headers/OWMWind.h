//
//  Wind.h
//  OpenWeatherMap Universal Framework
//
//  Created by Jacek Grygiel on 24/04/14.
//  Copyright (c) 2014 JacekGrygiel. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OWMBasicModel.h"

@interface OWMWind : OWMBasicModel
@property(nonatomic, assign) float speed;
@property(nonatomic, assign) long deg;
@property(nonatomic, assign) long gust;
@end
