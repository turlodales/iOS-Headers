//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIStorePageSection.h>

@class ACAccountStore, SKUIFacebookLikeStatus, SKUIFacebookPageComponent, SKUIReviewsFacebookView;

@interface SKUIFacebookPageSection : SKUIStorePageSection
{
    ACAccountStore *_accountStore;
    BOOL _facebookAccountsExist;
    SKUIReviewsFacebookView *_facebookView;
    BOOL _isLoadingLikeStatus;
    SKUIFacebookLikeStatus *_likeStatus;
}

- (void).cxx_destruct;
- (void)_resetState;
- (void)_reloadLikeStatus;
- (void)_reloadCollectionViewSection;
- (void)_finishLookupWithStatus:(id)arg1 error:(id)arg2;
- (id)_facebookView;
- (int)_facebookAccountsExist;
- (void)_changeStatusToUserLiked:(BOOL)arg1;
- (id)_accountStore;
- (void)_accountStoreDidChangeNotification:(id)arg1;
- (void)_toggleLikeAction:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (int)numberOfCells;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) SKUIFacebookPageComponent *pageComponent; // @dynamic pageComponent;

@end

