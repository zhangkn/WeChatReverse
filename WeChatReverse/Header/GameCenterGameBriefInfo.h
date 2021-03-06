//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class GameCenterLabelInfo, GameCenterLatestGameInfo, NSArray, NSString;

@interface GameCenterGameBriefInfo : MMObject <PBCoding>
{
    _Bool hasEnableChatRoom;
    unsigned int tag;
    NSString *appID;
    NSString *name;
    NSString *remark;
    NSString *brief;
    long long trend;
    NSString *iconURL;
    NSString *downloadURL;
    unsigned long long showType;
    NSString *imageURL;
    GameCenterLatestGameInfo *latestGameInfo;
    NSString *webURL;
    NSString *noticeID;
    NSArray *promotedFeeds;
    NSString *titleForNewLabel;
    NSString *tagForNewApp;
    GameCenterLabelInfo *labelInfo;
    NSString *recommendDesc;
    NSString *externInfo;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *externInfo; // @synthesize externInfo;
@property(retain, nonatomic) NSString *recommendDesc; // @synthesize recommendDesc;
@property(retain, nonatomic) GameCenterLabelInfo *labelInfo; // @synthesize labelInfo;
@property(nonatomic) _Bool hasEnableChatRoom; // @synthesize hasEnableChatRoom;
@property(retain, nonatomic) NSString *tagForNewApp; // @synthesize tagForNewApp;
@property(retain, nonatomic) NSString *titleForNewLabel; // @synthesize titleForNewLabel;
@property(retain, nonatomic) NSArray *promotedFeeds; // @synthesize promotedFeeds;
@property(retain, nonatomic) NSString *noticeID; // @synthesize noticeID;
@property(retain, nonatomic) NSString *webURL; // @synthesize webURL;
@property(retain, nonatomic) GameCenterLatestGameInfo *latestGameInfo; // @synthesize latestGameInfo;
@property(retain, nonatomic) NSString *imageURL; // @synthesize imageURL;
@property(nonatomic) unsigned long long showType; // @synthesize showType;
@property(nonatomic) unsigned int tag; // @synthesize tag;
@property(retain, nonatomic) NSString *downloadURL; // @synthesize downloadURL;
@property(retain, nonatomic) NSString *iconURL; // @synthesize iconURL;
@property(nonatomic) long long trend; // @synthesize trend;
@property(retain, nonatomic) NSString *brief; // @synthesize brief;
@property(retain, nonatomic) NSString *remark; // @synthesize remark;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) NSString *appID; // @synthesize appID;
- (void).cxx_destruct;
- (id)externInfoForPromotedGame;
- (void)parseFromNewAppItem:(id)arg1;
- (void)parseFromAdItem:(id)arg1;
- (void)parseFromResp:(id)arg1;
- (void)parseFromAppItem:(id)arg1;
- (_Bool)isWithNew;
- (_Bool)canSubscribe;
- (_Bool)isValid;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)parseFromBriefInfo:(id)arg1;
- (void)dealloc;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

