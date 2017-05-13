//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "FavTagEditViewDelegate.h"
#import "MyUIScrollViewDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class FavTagTableView, MMTableView, MyUIScrollView, NSArray, NSMutableArray, NSMutableDictionary, NSString, UIImageView, UILabel, UIScrollView, UITextField, UIView;

@interface NewContactsSearchPanelView : MMUIView <FavTagEditViewDelegate, UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, UIScrollViewDelegate, MyUIScrollViewDelegate>
{
    NSMutableArray *m_arrKeys;
    NSMutableArray *m_arrImages;
    unsigned int m_uiImageSize;
    unsigned int m_uiCellSize;
    unsigned int m_uiLeftMargin;
    unsigned int m_uiRightMargin;
    _Bool m_bShouldDeleteOnClick;
    UIImageView *m_emptyView;
    _Bool m_showEmptyView;
    int m_headerType;
    id <NewContactsSearchPanelViewDelegate> m_delegate;
    MyUIScrollView *m_scrollView;
    long long uiMaxShowHeadViewCount;
    _Bool isEmbedSearchTextField;
    _Bool isShowAllTags;
    UIImageView *m_searchIconView;
    UITextField *m_SearchTextField;
    UILabel *m_placeholderLabel;
    UIView *m_ContentView;
    double m_atContentViewYPos;
    UIView *m_bottomSeperatorLine;
    MMTableView *m_tableView;
    MMUIView *m_tagView;
    UIScrollView *m_tagScrollView;
    FavTagTableView *m_favTagView;
    NSMutableArray *m_arrFilteredObject;
    NSArray *m_arrContactTags;
    double m_normalKeyboardHeight;
    _Bool bIsAddedBlurEffect;
    NSString *nsCurrentSelectTagName;
    NSMutableArray *m_arrSearchTagFilteredObject;
    NSMutableDictionary *m_dicContactsOfTagName;
    NSMutableArray *m_arrSectionKeys;
    NSMutableDictionary *m_dicSectionTitles;
    NSMutableDictionary *m_dicSectionResults;
    unsigned int m_expandBitSet;
    _Bool _bShouldFilterSearchResults;
    _Bool _bDisplaySectionResults;
}

@property(nonatomic) _Bool bDisplaySectionResults; // @synthesize bDisplaySectionResults=_bDisplaySectionResults;
@property(nonatomic) _Bool bShouldFilterSearchResults; // @synthesize bShouldFilterSearchResults=_bShouldFilterSearchResults;
@property(nonatomic, setter=SetIsShowAllTags:) _Bool isShowAllTags; // @synthesize isShowAllTags;
@property(retain, nonatomic) UITextField *m_SearchTextField; // @synthesize m_SearchTextField;
@property(nonatomic, setter=SetIsEmbedSearchTextField:) _Bool isEmbedSearchTextField; // @synthesize isEmbedSearchTextField;
@property(nonatomic) __weak id <NewContactsSearchPanelViewDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)idkeyWithResultClick:(_Bool)arg1 withCollapse:(_Bool)arg2;
- (_Bool)shouldCollaseOrExpandSearchResultAtIndex:(long long)arg1;
- (int)getMoreCellStatusAtSection:(long long)arg1;
- (void)clickMoreCellAtIndexPath:(id)arg1;
- (id)getSectionKeyAtSection:(long long)arg1;
- (id)getMoreCellImageAtSection:(long long)arg1;
- (id)getMoreCellDescriptionAtSection:(long long)arg1;
- (_Bool)isCollapseAtSection:(long long)arg1;
- (_Bool)isMoreCellAtIndexPath:(id)arg1;
- (void)prepareRefreshing;
- (void)setFilterdSectionResults:(id)arg1;
- (void)setSectionTitleMaps:(id)arg1;
- (void)setFilterdSectionKeys:(id)arg1;
- (id)getSearchResultTable;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onSelectSearchedContact;
- (void)onTouchEndBlankView;
- (void)onTagHighLight:(id)arg1;
- (void)makeViewOfInvisibleStatus;
- (id)getSearchText;
- (void)onTextFieldChanged:(id)arg1;
- (void)recoverTextAttribute;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)onTouchesEnded:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)cancelSearch;
- (void)doSearch:(id)arg1;
- (void)HideSearchIcon;
- (void)ShowSearchIcon;
- (_Bool)isLastHeadViewHighlight;
- (void)SetLastHeadViewHighlight:(_Bool)arg1;
- (void)deleteImage:(unsigned int)arg1;
- (void)addImage:(id)arg1 animated:(_Bool)arg2;
- (void)updateBlurView;
- (void)setHideContactTagViews:(_Bool)arg1;
- (void)updateContactTagView;
- (void)clearAll;
- (void)recoverSearchBarView;
- (void)RemoveImageForKey:(id)arg1;
- (void)SetImageForKey:(id)arg1 animated:(_Bool)arg2;
- (void)SetRightMargin:(unsigned int)arg1;
- (void)SetLeftMargin:(unsigned int)arg1;
- (void)SetCellSize:(unsigned int)arg1;
- (void)SetImageSize:(unsigned int)arg1;
- (void)SetImageType:(int)arg1;
- (id)getMatchTipFor:(id)arg1;
- (id)getFilteredObjects;
- (void)tryFilterSearchResult;
- (void)clearFilteredObjects;
- (void)addFilteredObject:(id)arg1;
- (unsigned long long)getObjectCount;
- (void)setFilteredObjects:(id)arg1;
- (unsigned int)getObjectRow:(id)arg1;
- (id)getObjectForIndexPath:(id)arg1;
- (id)getObjectFor:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)setContentView:(id)arg1 atContentViewYPos:(double)arg2;
- (void)dealloc;
- (void)updateBottomSeperatorLine;
- (id)initWithFrame:(struct CGRect)arg1 andContentView:(id)arg2 atContentViewYPos:(double)arg3 andCellSize:(double)arg4 andMaxShowCount:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

