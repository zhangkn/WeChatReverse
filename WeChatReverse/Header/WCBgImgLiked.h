//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCDBCoding.h"

@class NSString;

@interface WCBgImgLiked : NSObject <WCDBCoding>
{
    NSString *username;
    NSString *bgimg;
    long long m___rowID;
}

+ (const map_490096f0 *)getFileValueTagIndexMap;
+ (id)getFileValueTypeTable;
+ (const map_490096f0 *)getPackedValueTagIndexMap;
+ (id)getPackedValueTypeTable;
+ (const map_64c9abee *)getValueNameIndexMap;
+ (id)getValueTable;
+ (id)dummyObject;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(retain, nonatomic) NSString *bgimg; // @synthesize bgimg;
@property(retain, nonatomic) NSString *username; // @synthesize username;
- (void).cxx_destruct;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (const WCDBCondition_22fabacd *)db_bgimg;
- (const WCDBCondition_22fabacd *)db_username;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
