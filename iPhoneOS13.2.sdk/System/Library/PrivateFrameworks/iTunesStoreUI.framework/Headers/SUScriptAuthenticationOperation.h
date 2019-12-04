//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSNumber, SSMutableAuthenticationContext, UIViewController;

@interface SUScriptAuthenticationOperation : ISOperation
{
    NSNumber *_authenticatedDSID;
    SSMutableAuthenticationContext *_authenticationContext;
    UIViewController *_presentingViewController;
}

@property(retain) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain) NSNumber *authenticatedDSID; // @synthesize authenticatedDSID=_authenticatedDSID;
- (void)setScriptOptions:(id)arg1;
- (void)sendCompletionCallback:(id)arg1;
- (void)run;
- (id)authenticatedAccountDSID;
- (id)initWithAccountIdentifier:(id)arg1;
- (id)init;

@end
