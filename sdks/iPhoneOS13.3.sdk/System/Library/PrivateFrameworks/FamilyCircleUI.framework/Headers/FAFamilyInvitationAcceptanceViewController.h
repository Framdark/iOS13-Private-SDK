//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccountUI/AAUIBleachedNavigationController.h>

#import <FamilyCircleUI/FAConfirmIdentityViewControllerDelegate-Protocol.h>
#import <FamilyCircleUI/RemoteUIControllerDelegate-Protocol.h>

@class AAFamilyInvite, AAGrandSlamSigner, AAUIRemoteUIController, ACAccount, ACAccountStore, NSMutableURLRequest, NSOperationQueue;

@interface FAFamilyInvitationAcceptanceViewController : AAUIBleachedNavigationController <FAConfirmIdentityViewControllerDelegate, RemoteUIControllerDelegate>
{
    ACAccount *_account;
    ACAccountStore *_accountStore;
    AAGrandSlamSigner *_grandSlamSigner;
    AAFamilyInvite *_invite;
    AAUIRemoteUIController *_remoteUIController;
    NSOperationQueue *_inviteOperationQueue;
    NSMutableURLRequest *_startRemoteUIRequest;
    NSMutableURLRequest *_currentRemoteUIRequest;
}

// - (void).cxx_destruct;
- (void)_sendUserToiTunesSettings;
- (void)_loadiTunesLinkingRemoteUI;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)remoteUIController:(id)arg1 willLoadRequest:(id)arg2;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(BOOL)arg3;
- (void)_showErrorAlert;
- (void)confirmIdentityViewController:(id)arg1 didCompleteWithSuccess:(BOOL)arg2;
- (void)_cancelButtonWasTapped:(id)arg1;
- (id)_createCancelButton;
- (id)initWithInvite:(id)arg1 appleAccount:(id)arg2 grandSlamSigner:(id)arg3;

@end

