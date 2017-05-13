//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface TranslateInfo : MMObject <PBCoding>
{
    unsigned int mesLocalId;
    NSString *originText;
    NSString *originLang;
    NSString *translatedText;
    NSString *translatedLang;
    _Bool showOriginTextNow;
    int translateStatus;
    NSString *brandWording;
    NSString *snsID;
    _Bool bNeedShowAnimation;
    NSString *displayTranslatedText;
}

+ (void)initialize;
@property(nonatomic) _Bool bNeedShowAnimation; // @synthesize bNeedShowAnimation;
@property(retain, nonatomic) NSString *snsID; // @synthesize snsID;
@property(retain, nonatomic) NSString *brandWording; // @synthesize brandWording;
@property(nonatomic) int translateStatus; // @synthesize translateStatus;
@property(nonatomic) _Bool showOriginTextNow; // @synthesize showOriginTextNow;
@property(retain, nonatomic) NSString *translatedLang; // @synthesize translatedLang;
@property(retain, nonatomic) NSString *translatedText; // @synthesize translatedText;
@property(retain, nonatomic) NSString *originLang; // @synthesize originLang;
@property(retain, nonatomic) NSString *originText; // @synthesize originText;
@property(nonatomic) unsigned int mesLocalId; // @synthesize mesLocalId;
@property(retain, nonatomic) NSString *displayTranslatedText; // @synthesize displayTranslatedText;
- (void).cxx_destruct;
- (int)GetTranslateStatus;
- (_Bool)isTranslateFailed;
- (_Bool)isTextTooLong;
- (_Bool)isTranslating;
- (id)getDisplayContent;
- (id)init;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

