//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, WAAppTaskReferrerInfo;

@interface WAAppTaskOpenParameter : NSObject
{
    unsigned int _enterScene;
    WAAppTaskReferrerInfo *_referrerInfo;
    NSString *_enterPath;
    NSDictionary *_userData;
}

@property(retain, nonatomic) NSDictionary *userData; // @synthesize userData=_userData;
@property(retain, nonatomic) NSString *enterPath; // @synthesize enterPath=_enterPath;
@property(nonatomic) unsigned int enterScene; // @synthesize enterScene=_enterScene;
@property(retain, nonatomic) WAAppTaskReferrerInfo *referrerInfo; // @synthesize referrerInfo=_referrerInfo;
- (void).cxx_destruct;

@end

