//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface FTSWebSearchClickReportItem : MMObject
{
    unsigned int _scene;
    unsigned int _docPos;
    unsigned int _typePos;
    unsigned int _isHomePage;
    unsigned int _expand1;
    unsigned int _clickType;
    NSString *_searchID;
    NSString *_recommendID;
    unsigned long long _businessType;
    NSString *_docID;
    unsigned long long _timeStamp;
    NSString *_suggestionID;
    NSString *_expand2;
    NSString *_logString;
}

@property(retain, nonatomic) NSString *logString; // @synthesize logString=_logString;
@property(retain, nonatomic) NSString *expand2; // @synthesize expand2=_expand2;
@property(nonatomic) unsigned int clickType; // @synthesize clickType=_clickType;
@property(retain, nonatomic) NSString *suggestionID; // @synthesize suggestionID=_suggestionID;
@property(nonatomic) unsigned int expand1; // @synthesize expand1=_expand1;
@property(nonatomic) unsigned long long timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) unsigned int isHomePage; // @synthesize isHomePage=_isHomePage;
@property(nonatomic) unsigned int typePos; // @synthesize typePos=_typePos;
@property(nonatomic) unsigned int docPos; // @synthesize docPos=_docPos;
@property(retain, nonatomic) NSString *docID; // @synthesize docID=_docID;
@property(nonatomic) unsigned long long businessType; // @synthesize businessType=_businessType;
@property(retain, nonatomic) NSString *recommendID; // @synthesize recommendID=_recommendID;
@property(retain, nonatomic) NSString *searchID; // @synthesize searchID=_searchID;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isValid;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

