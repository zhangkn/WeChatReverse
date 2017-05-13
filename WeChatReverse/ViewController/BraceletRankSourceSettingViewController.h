//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IWCDeviceBrandMgrExt.h"
#import "IWCDevicePedometerSearchViewControllerExt.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MMTableView, NSMutableArray, NSString;

@interface BraceletRankSourceSettingViewController : MMUIViewController <IWCDeviceBrandMgrExt, UITableViewDelegate, UITableViewDataSource, UIAlertViewDelegate, IWCDevicePedometerSearchViewControllerExt>
{
    NSMutableArray *m_DataSourcList;
    struct map<unsigned long, unsigned int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>> m_mapSectionType;
    NSMutableArray *m_RowDataList;
    MMTableView *m_tableView;
    NSString *m_nsDataSourceFaqURL;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onAddSportDevice:(id)arg1;
- (void)onGetSportDeviceListEnd:(id)arg1 DataSourceFaqURL:(id)arg2 ErrorCode:(int)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)reloadTableData;
- (void)makeAddPedometerCell:(id)arg1;
- (void)makeOriginalCell:(id)arg1 withTitle:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)updateTableSectionWithStepOnState:(_Bool)arg1;
- (void)resetSection;
- (void)initData;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

