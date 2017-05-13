//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCDBCoding.h"

@class MultiTalkMemberList, NSString;

@interface MultiTalkContactItem : MMObject <WCDBCoding>
{
    unsigned int localID;
    int routID;
    unsigned int memberListCount;
    NSString *groupID;
    NSString *clientGroupID;
    NSString *wxGroupID;
    MultiTalkMemberList *contactMemberList;
    NSString *createUserName;
    NSString *nickName;
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
@property(nonatomic) unsigned int memberListCount; // @synthesize memberListCount;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName;
@property(retain, nonatomic) NSString *createUserName; // @synthesize createUserName;
@property(retain, nonatomic) MultiTalkMemberList *contactMemberList; // @synthesize contactMemberList;
@property(nonatomic) int routID; // @synthesize routID;
@property(retain, nonatomic) NSString *wxGroupID; // @synthesize wxGroupID;
@property(retain, nonatomic) NSString *clientGroupID; // @synthesize clientGroupID;
@property(retain, nonatomic) NSString *groupID; // @synthesize groupID;
@property(nonatomic) unsigned int localID; // @synthesize localID;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)checkHasActiveMember;
- (_Bool)isContactItemValid;
- (id)getContactDisplayName;
- (void)dealloc;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (const WCDBCondition_c6db074e *)db_memberListCount;
- (const WCDBCondition_22fabacd *)db_nickName;
- (const WCDBCondition_22fabacd *)db_createUserName;
- (const WCDBCondition_ed61e877 *)db_contactMemberList;
- (const WCDBCondition_9620f531 *)db_routID;
- (const WCDBCondition_22fabacd *)db_wxGroupID;
- (const WCDBCondition_22fabacd *)db_clientGroupID;
- (const WCDBCondition_22fabacd *)db_groupID;
- (const WCDBCondition_c6db074e *)db_localID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

