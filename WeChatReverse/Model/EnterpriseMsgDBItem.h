//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCDBCoding.h"

@class NSString;

@interface EnterpriseMsgDBItem : MMObject <WCDBCoding>
{
    unsigned int m_uiMesLocalId;
    unsigned int m_uiCreateTime;
    unsigned int m_uiDesc;
    unsigned int m_uiStatus;
    unsigned int m_uiImgStatus;
    unsigned int m_uiType;
    unsigned long long m_ui64MesSvrId;
    NSString *m_nsMessage;
    NSString *m_nsMsgSource;
    NSString *m_nsFromUsr;
    NSString *m_nsToUsr;
    NSString *m_nsBizChatId;
    NSString *m_nsRealChatUsr;
    NSString *m_nsPattern;
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
@property(retain, nonatomic) NSString *m_nsPattern; // @synthesize m_nsPattern;
@property(retain, nonatomic) NSString *m_nsRealChatUsr; // @synthesize m_nsRealChatUsr;
@property(retain, nonatomic) NSString *m_nsBizChatId; // @synthesize m_nsBizChatId;
@property(retain, nonatomic) NSString *m_nsToUsr; // @synthesize m_nsToUsr;
@property(retain, nonatomic) NSString *m_nsFromUsr; // @synthesize m_nsFromUsr;
@property(retain, nonatomic) NSString *m_nsMsgSource; // @synthesize m_nsMsgSource;
@property(nonatomic) unsigned int m_uiType; // @synthesize m_uiType;
@property(retain, nonatomic) NSString *m_nsMessage; // @synthesize m_nsMessage;
@property(nonatomic) unsigned int m_uiImgStatus; // @synthesize m_uiImgStatus;
@property(nonatomic) unsigned int m_uiStatus; // @synthesize m_uiStatus;
@property(nonatomic) unsigned int m_uiDesc; // @synthesize m_uiDesc;
@property(nonatomic) unsigned int m_uiCreateTime; // @synthesize m_uiCreateTime;
@property(nonatomic) unsigned int m_uiMesLocalId; // @synthesize m_uiMesLocalId;
@property(nonatomic) unsigned long long m_ui64MesSvrId; // @synthesize m_ui64MesSvrId;
- (void).cxx_destruct;
- (long long)compareMessageAscending:(id)arg1;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (const WCDBCondition_22fabacd *)db_m_nsPattern;
- (const WCDBCondition_22fabacd *)db_m_nsRealChatUsr;
- (const WCDBCondition_22fabacd *)db_m_nsBizChatId;
- (const WCDBCondition_22fabacd *)db_m_nsToUsr;
- (const WCDBCondition_22fabacd *)db_m_nsFromUsr;
- (const WCDBCondition_22fabacd *)db_m_nsMsgSource;
- (const WCDBCondition_c6db074e *)db_m_uiType;
- (const WCDBCondition_22fabacd *)db_m_nsMessage;
- (const WCDBCondition_c6db074e *)db_m_uiImgStatus;
- (const WCDBCondition_c6db074e *)db_m_uiStatus;
- (const WCDBCondition_c6db074e *)db_m_uiDesc;
- (const WCDBCondition_c6db074e *)db_m_uiCreateTime;
- (const WCDBCondition_c6db074e *)db_m_uiMesLocalId;
- (const WCDBCondition_7786cbb5 *)db_m_ui64MesSvrId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

