//
//  Sys.h
//  OpenWeatherMap Universal Framework
//
//  Created by Jacek Grygiel on 24/04/14.
//  Copyright (c) 2014 JacekGrygiel. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OWMBasicModel.h"

@interface OWMSys : OWMBasicModel
@property(nonatomic,strong) NSString *country;
@property(nonatomic, assign) float message;
@property(nonatomic, assign) long long sunrise;
@property(nonatomic, assign) long long sunset;
@end
