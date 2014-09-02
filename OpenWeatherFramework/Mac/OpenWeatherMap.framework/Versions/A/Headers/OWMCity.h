//
//  City.h
//  OpenWeatherMap Universal Framework
//
//  Created by Jacek Grygiel on 25/04/14.
//  Copyright (c) 2014 JacekGrygiel. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OWMBasicModel.h"

@interface OWMCity : OWMBasicModel


@property(nonatomic, strong) NSString *country;
@property(nonatomic, assign) long long identifier;
@property(nonatomic, assign) float lat;
@property(nonatomic, assign) float lon;
@property(nonatomic, assign) long long population;
@property(nonatomic, strong) NSString *name;
@end
