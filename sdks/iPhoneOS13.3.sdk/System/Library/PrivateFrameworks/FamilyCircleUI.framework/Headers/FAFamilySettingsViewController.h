//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccountsUI/ACUIViewController.h>

#import <FamilyCircleUI/FASharedSubscriptionSpecifierProviderDelegeate-Protocol.h>
#import <FamilyCircleUI/RemoteUIControllerDelegate-Protocol.h>

@class AAFamilyDetailsResponse, AAFamilyMember, AAGrandSlamSigner, AAUIProfilePictureStore, AAUIRemoteUIController, AAUIServerUIHookHandler, ACAccount, ACAccountStore, CNMonogrammer, FAChildAccountCreationController, FACircleRemoteUIDelegate, FAFamilyCreditCard, FAFamilyNotificationObserver, FARequestConfigurator, FASharedSubscriptionSpecifierProvider, NSArray, NSMutableDictionary, NSMutableURLRequest, NSObject, NSOperationQueue, NSURL, PSSpecifier, SSAccount, UINavigationController, UITableViewCell;
@protocol FAFamilySettingsViewControllerDelegate;

@interface FAFamilySettingsViewController : ACUIViewController <UINavigationControllerDelegate, RemoteUIControllerDelegate, FASharedSubscriptionSpecifierProviderDelegeate>
{
    AAGrandSlamSigner *_iCloudGrandSlamSigner;
    AAGrandSlamSigner *_appleIDGrandSlamSigner;
    ACAccount *_appleAccount;
    ACAccount *_grandSlamAccount;
    SSAccount *_itunesAccount;
    ACAccountStore *_accountStore;
    AAFamilyDetailsResponse *_familyDetailsResponse;
    NSOperationQueue *_networkingQueue;
    PSSpecifier *_familyMembersGroup;
    PSSpecifier *_addFamilyMemberCell;
    AAUIProfilePictureStore *_profilePictureStore;
    CNMonogrammer *_monogrammer;
    AAUIRemoteUIController *_iCloudRemoteUIController;
    AAUIRemoteUIController *_appleIDRemoteUIController;
    AAUIRemoteUIController *_familyV2RemoteUIController;
    FACircleRemoteUIDelegate *_familyRemoteUIDelegate;
    UITableViewCell *_activeCell;
    NSURL *_activeURL;
    AAFamilyMember *_memberBeingViewed;
    NSMutableDictionary *_memberDetailsPageSurrogatesByOM;
    FAChildAccountCreationController *_childAccountCreationController;
    UINavigationController *_childAccountCreationNavController;
    NSObject *_profilePictureStoreDidChangeObserver;
    FAFamilyNotificationObserver *_notificationObserver;
    BOOL _fetchingPaymentInfo;
    FAFamilyCreditCard *_paymentMethod;
    NSArray *_paymentInfoSpecifiers;
    BOOL _fetchingPaymentMethodImage;
    NSMutableURLRequest *_currentRemoteUIRequest;
    FARequestConfigurator *_requestConfigurator;
    AAUIServerUIHookHandler *_serverUIHookHandler;
    FACircleRemoteUIDelegate *_faCircleRemoteUIDelegate;
    FASharedSubscriptionSpecifierProvider *_sharedSubscriptionSpecifierProvider;
    id <FAFamilySettingsViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <FAFamilySettingsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)didSelectSpecifier:(id)arg1;
- (void)reloadSpecifiersForProvider:(id)arg1 oldSpecifiers:(id)arg2 animated:(BOOL)arg3;
- (void)_updateMemberDetailsPageWithLinkedAppleID:(id)arg1;
- (id)_itunesAccount;
- (void)_showConnectivityAlert;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (void)remoteUIController:(id)arg1 didRemoveObjectModel:(id)arg2;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(BOOL)arg3;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(NSUInteger )arg3;
- (id)remoteUIController:(id)arg1 createPageWithName:(id)arg2 attributes:(id)arg3;
- (void)_handleFamilySubscriptionChanged;
- (void)_handleMemberUpdate:(id)arg1;
- (void)_handleMemberDeletion:(id)arg1;
- (void)_handleFamilyDeletion;
- (void)_handleFamilyStatusChange:(id)arg1;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)remoteUIController:(id)arg1 willLoadRequest:(id)arg2;
- (BOOL)_hasActiveCell;
- (void)_stopSpinnerInCellLoadingRemoteUI;
- (void)_startSpinnerInCellLoadingRemoteUI:(id)arg1;
- (void)_fireFamilyUpdateNotification;
- (void)_fetchFamilyPaymentInfoWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_fetchUpdatedFamilyDetailsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_performEventWithContext:(id)arg1 specifier:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_addMemberWithEventType:(id)arg1;
- (void)_addFamilyMemberButtonWasTapped:(id)arg1;
- (void)_setFresnoRemoteUIDelgate:(id)arg1;
- (void)_loadRemoteUIWithRequest:(id)arg1 url:(id)arg2 specifier:(id)arg3 type:(long long)arg4;
- (void)_loadRemoteUIWithRequest:(id)arg1 specifier:(id)arg2 type:(long long)arg3;
- (void)_paymentMethodCellWasTapped:(id)arg1;
- (void)_pendingFamilyMemberCellWasTapped:(id)arg1;
- (void)_familyMemberCellWasTapped:(id)arg1;
- (id)_createSpecifiersForPaymentInfo;
- (id)_createSpecifierForPendingMember:(id)arg1;
- (id)_createSpecifierForFamilyMemberCell:(id)arg1;
- (void)_learnMoreLinkButtonWasTapped:(id)arg1;
- (id)_createSpecifierForFamilyMemberGroup;
- (void)_reloadPaymentInfoSpecifiersAnimated:(BOOL)arg1;
- (id)_imageFromBundle:(id)arg1;
- (id)_sharedSubscriptionSpecifierProvider;
- (id)_sharedSubscriptionSpecifiers;
- (void)traitCollectionDidChange:(id)arg1;
- (id)specifiers;
- (void)viewDidLoad;
- (id)_requestConfigurator;
- (id)_appleIDGrandSlamSigner;
- (void)dealloc;
- (id)initWithAppleAccount:(id)arg1 grandSlamSigner:(id)arg2 familyDetailsResponse:(id)arg3;

@end

