//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@class NSString;

@interface StoreEmotionRewardAskForRewardCgi : MMObject <PBMessageObserverDelegate>
{
    _Bool m_hasStartRequestOnce;
    NSString *m_pid;
    unsigned int m_eventID;
    id <StoreEmotionRewardAskForRewardCgiDelegate> _delegate;
}

@property(nonatomic) __weak id <StoreEmotionRewardAskForRewardCgiDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showErrorTipsWithWording:(id)arg1;
- (void)callFailedDelegateWithTips:(id)arg1;
- (void)callFailedDelegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)startRequestWithPrice:(id)arg1;
- (id)initWithPid:(id)arg1;

@end

