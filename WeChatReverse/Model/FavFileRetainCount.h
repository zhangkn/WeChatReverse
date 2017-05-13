//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCDBCoding.h"

@class NSString;

@interface FavFileRetainCount : NSObject <WCDBCoding>
{
    unsigned int itemLocalId;
    NSString *md5;
    long long m___rowID;
}

+ (const basic_string_a490aa4c *)getWCDBPrimaryColumnName;
+ (const struct WCDBIndexHelper *)getWCDBIndexArray;
+ (unsigned long long)getWCDBIndexArrayCount;
+ (const map_490096f0 *)getFileValueTagIndexMap;
+ (id)getFileValueTypeTable;
+ (const map_490096f0 *)getPackedValueTagIndexMap;
+ (id)getPackedValueTypeTable;
+ (const map_64c9abee *)getValueNameIndexMap;
+ (id)getValueTable;
+ (id)dummyObject;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(nonatomic) unsigned int itemLocalId; // @synthesize itemLocalId;
@property(retain, nonatomic) NSString *md5; // @synthesize md5;
- (void).cxx_destruct;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (const WCDBCondition_c6db074e *)db_itemLocalId;
- (const WCDBCondition_22fabacd *)db_md5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

