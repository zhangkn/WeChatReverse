//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IWCOutFacadeExt.h"
#import "InviteFriendLogicDelegate.h"
#import "MMImageLoaderObserver.h"
#import "UISearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class MMTableView, MMTimer, MMUIImageView, MMUILabel, MMUIView, NSArray, NSMutableArray, NSMutableDictionary, NSString, UIButton, UIImageView, UILabel, UISearchDisplayController, UIView, WCOActivityMsgInfo, WCOutInviteFriendLogic, WCOutPhoneContact;

@interface WCOutContactViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, IWCOutFacadeExt, WCActionSheetDelegate, UISearchBarDelegate, UISearchDisplayDelegate, InviteFriendLogicDelegate, MMImageLoaderObserver>
{
    MMTableView *m_tableView;
    MMUIView *m_noDataView;
    UIImageView *redDotView;
    UIButton *m_callBtn;
    NSMutableDictionary *m_allContactsDic;
    NSMutableArray *m_sectionKeyArray;
    NSMutableDictionary *m_nonAddressBookContactsDic;
    NSMutableDictionary *m_contactToArchiveDic;
    NSMutableArray *m_lastCallArchives;
    double m_lastScrollViewOffset;
    MMTimer *m_hideIndexTitleTimer;
    long long m_lastScrollTime;
    NSString *m_curLanguage;
    WCOutPhoneContact *m_selectedContactInActionSheet;
    NSArray *m_phoneArrayShowInActionSheet;
    _Bool _bShowIndexTitle;
    _Bool _isSearching;
    int _currencyIconWidth;
    NSArray *_fliterContacts;
    UISearchDisplayController *_m_searchDisplayController;
    NSString *_searchText;
    WCOutInviteFriendLogic *_inviteFriendLogic;
    MMUILabel *_balanceLabel;
    UIButton *_callbtn;
    UILabel *_currencyLabel;
    UIView *_activityView;
    MMUIImageView *_activityImgView;
    WCOActivityMsgInfo *_activityInfo;
}

@property(retain, nonatomic) WCOActivityMsgInfo *activityInfo; // @synthesize activityInfo=_activityInfo;
@property(retain, nonatomic) MMUIImageView *activityImgView; // @synthesize activityImgView=_activityImgView;
@property(retain, nonatomic) UIView *activityView; // @synthesize activityView=_activityView;
@property(nonatomic) int currencyIconWidth; // @synthesize currencyIconWidth=_currencyIconWidth;
@property(retain, nonatomic) UILabel *currencyLabel; // @synthesize currencyLabel=_currencyLabel;
@property(retain, nonatomic) UIButton *callbtn; // @synthesize callbtn=_callbtn;
@property(retain, nonatomic) MMUILabel *balanceLabel; // @synthesize balanceLabel=_balanceLabel;
@property(retain, nonatomic) WCOutInviteFriendLogic *inviteFriendLogic; // @synthesize inviteFriendLogic=_inviteFriendLogic;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(retain, nonatomic) UISearchDisplayController *m_searchDisplayController; // @synthesize m_searchDisplayController=_m_searchDisplayController;
@property(retain, nonatomic) NSArray *fliterContacts; // @synthesize fliterContacts=_fliterContacts;
@property(nonatomic) _Bool isSearching; // @synthesize isSearching=_isSearching;
@property(nonatomic) _Bool bShowIndexTitle; // @synthesize bShowIndexTitle=_bShowIndexTitle;
- (void).cxx_destruct;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)onBackClick:(id)arg1;
- (void)configActivityView;
- (id)getbalanceLabelText;
- (void)refreshbalanceLabel;
- (void)didReceiveCouponResponse;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)search:(id)arg1;
- (id)allContacts;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)updateNewxmlInfo;
- (void)addNewCall:(id)arg1;
- (void)updateWCOutContactsInfo;
- (void)updateWCOutContacts:(id)arg1;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)clearSelectStauts;
- (void)rightCallBtnClicked:(id)arg1 event:(id)arg2;
- (id)lastCallCellAtRow:(unsigned long long)arg1;
- (id)tableView:(id)arg1 filtercontactCellAtIndexPath:(id)arg2;
- (id)contactCellAtIndexPath:(id)arg1;
- (id)accountCellAtIndexpath:(id)arg1;
- (void)onCellBtnClick:(id)arg1;
- (id)KeypadAndContactCellAtIndexpath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)hideIndexTitle;
- (void)onClickBottomBtn;
- (void)OnOpenAccount;
- (void)deleteRecentCallItemAtIndex:(long long)arg1;
- (void)showWellcomeTips;
- (void)showProfileForContact:(id)arg1 AndIsFromLastCallContact:(_Bool)arg2;
- (void)configureBackBarButtomItem;
- (void)configCallBtn;
- (void)configFooterViewWithCount:(unsigned long long)arg1;
- (void)configTableView;
- (void)configNoDataHintsLabel;
- (_Bool)showAccount;
- (void)configRecentCallContacts;
- (void)configAccuntSection;
- (void)configSearchDisplayController;
- (void)configData;
- (void)configRightBarButtonItem;
- (void)configView;
- (void)configModel;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initDeepLinkConfig;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

