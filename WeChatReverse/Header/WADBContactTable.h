//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCDBCoding.h"

@class NSString, WADBContactPack;

@interface WADBContactTable : NSObject <WCDBCoding>
{
    unsigned int type;
    unsigned int wxAppOpt;
    NSString *userName;
    NSString *brandIconURL;
    NSString *externalInfo;
    WADBContactPack *contactPack;
    NSString *headImageStatus;
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
@property(retain, nonatomic) NSString *headImageStatus; // @synthesize headImageStatus;
@property(nonatomic) unsigned int wxAppOpt; // @synthesize wxAppOpt;
@property(retain, nonatomic) WADBContactPack *contactPack; // @synthesize contactPack;
@property(retain, nonatomic) NSString *externalInfo; // @synthesize externalInfo;
@property(retain, nonatomic) NSString *brandIconURL; // @synthesize brandIconURL;
@property(nonatomic) unsigned int type; // @synthesize type;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
- (void).cxx_destruct;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (const WCDBCondition_22fabacd *)db_headImageStatus;
- (const WCDBCondition_c6db074e *)db_wxAppOpt;
- (const WCDBCondition_00c4e889 *)db_contactPack;
- (const WCDBCondition_22fabacd *)db_externalInfo;
- (const WCDBCondition_22fabacd *)db_brandIconURL;
- (const WCDBCondition_c6db074e *)db_type;
- (const WCDBCondition_22fabacd *)db_userName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

