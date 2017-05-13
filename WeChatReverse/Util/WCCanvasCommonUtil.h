//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WCCanvasCommonUtil : NSObject
{
}

+ (_Bool)shouldGameShareCanvasJumpToCanvasView;
+ (_Bool)isInGameShareJumpWayExp;
+ (id)addGameShareExpFieldToUrlString:(id)arg1 fromScene:(int)arg2;
+ (id)resizeImage:(id)arg1 toMinSideLen:(long long)arg2;
+ (void)setItem:(id)arg1 value:(id)arg2 forDynamic:(id)arg3;
+ (_Bool)shouldNotifyAppearFactor:(double)arg1 lastFactorNum:(id)arg2;
+ (_Bool)isCurSectionBlackMoreThanWhite:(long long)arg1 canvasInfo:(id)arg2;
+ (id)getCanvasComponentItemAtIndexPath:(id)arg1 canvasInfo:(id)arg2;
+ (id)getCellIdentifierAtIndexPath:(id)arg1 canvasInfo:(id)arg2;
+ (_Bool)isFirstCellInSection:(id)arg1 canvasInfo:(id)arg2;
+ (_Bool)isLastCellInSection:(id)arg1 canvasInfo:(id)arg2;
+ (id)getBackGroundColorAtSection:(long long)arg1 canvasInfo:(id)arg2;
+ (id)getBackGroundColorWhenLoading:(long long)arg1 canvasInfo:(id)arg2;
+ (_Bool)isBtnUrlNeedJumpCard:(id)arg1;
+ (_Bool)isBtnUrlNeedJumpAppstore:(id)arg1;
+ (_Bool)isBtnUrlNeedAddSessionData:(id)arg1 componentItem:(id)arg2;
+ (_Bool)isSameIndexPathBetween:(id)arg1 WithIndexPath:(id)arg2;
+ (id)getAdCardItemListForXml:(id)arg1;
+ (unsigned int)getCountOfCardBtnComponentInCanvasInfo:(id)arg1;
+ (id)genFowardAdXMLByDataItem:(id)arg1 adXML:(id)arg2;
+ (int)getComponentTypeWithCid:(id)arg1;
+ (unsigned int)getComponentCountInCanvasInfo:(id)arg1;
+ (id)getImage:(id)arg1;
+ (id)duplicate2:(id)arg1;
+ (id)duplicate:(id)arg1;

@end

