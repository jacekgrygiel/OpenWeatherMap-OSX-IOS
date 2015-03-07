//
//  Snow.h
//  OpenWeatherMap Universal Framework
//
//  Created by Jacek Grygiel on 24/04/14.
//  Copyright (c) 2014 JacekGrygiel. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OWMBasicModel.h"

@interface OWMSnow : OWMBasicModel
- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
@property(nonatomic, assign) long threeHours;
@end
