//
//  Language.h
//  OpenWeatherMap Universal Framework
//
//  Created by Jacek Grygiel on 24/04/14.
//  Copyright (c) 2014 JacekGrygiel. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, LanguageType){
    LanguageEnglish = 0,
    LanguageRussian = 1,
    LanguageItalian = 2,
    LanguageSpanish = 3,
    LanguageUkrainian = 4,
    LanguageGerman = 5,
    LanguagePortuguese = 6,
    LanguageRomanian = 7,
    LanguagePolish = 8,
    LanguageFinnish = 9,
    LanguageDutch = 10,
    LanguageFrench = 11,
    LanguageBulgarian = 12,
    LanguageSwedish = 13,
    LanguageChineseTraditional = 14,
    LanguageChineseSimplified = 15,
    LanguageTurkish = 16
};

@interface OWMLanguage : NSObject

@property(nonatomic, assign) LanguageType type;
@property(nonatomic, assign) NSString *languageString;
- (id) initWithLanguageType:(LanguageType) type;
+ (NSString*) abbreviationForLanguageType:(LanguageType) language;

@end
