//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface JumpToBizWebviewData : MMObject
{
    int webType;
    NSString *toUsername;
    NSString *appID;
    NSString *bundleID;
    NSString *extMsg;
}

@property(nonatomic) int webType; // @synthesize webType;
@property(retain, nonatomic) NSString *extMsg; // @synthesize extMsg;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID;
@property(retain, nonatomic) NSString *appID; // @synthesize appID;
@property(retain, nonatomic) NSString *toUsername; // @synthesize toUsername;
- (void).cxx_destruct;
- (void)dealloc;

@end

