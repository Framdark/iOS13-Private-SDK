//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AKAuthorizationUserResponse, AKUserInformation, NSArray, NSString;
@protocol AKCredentialRequestProtocol;

@interface AKAuthorizationScopeChoices : NSObject
{
    BOOL _wantsPrivateEmail;
    NSArray *_scopes;
    AKUserInformation *_userInformation;
    id <AKCredentialRequestProtocol> _selectedRequest;
    NSUInteger _indexOfChosenEmail;
    NSUInteger _indexOfChosenLogin;
    NSUInteger _emailCount;
}

+ (id)_dotsWithLength:(NSUInteger)arg1;
+ (id)obfuscatedEmail:(id)arg1;
+ (id)localizedFamilyNameLabel;
+ (id)localizedGivenNameLabel;
@property(readonly, nonatomic) NSUInteger emailCount; // @synthesize emailCount=_emailCount;
@property BOOL wantsPrivateEmail; // @synthesize wantsPrivateEmail=_wantsPrivateEmail;
@property NSUInteger indexOfChosenLogin; // @synthesize indexOfChosenLogin=_indexOfChosenLogin;
@property NSUInteger indexOfChosenEmail; // @synthesize indexOfChosenEmail=_indexOfChosenEmail;
@property(retain, nonatomic) id <AKCredentialRequestProtocol> selectedRequest; // @synthesize selectedRequest=_selectedRequest;
@property(copy, nonatomic) AKUserInformation *userInformation; // @synthesize userInformation=_userInformation;
@property(copy, nonatomic) NSArray *scopes; // @synthesize scopes=_scopes;
// - (void).cxx_destruct;
- (id)description;
- (id)_personNameComponents;
@property(readonly, nonatomic) NSString *localizedChosenEmail;
@property(readonly, nonatomic) NSString *localizedName;
@property(readonly, nonatomic) NSUInteger personNameComponentsOrder;
- (id)emailAtIndex:(NSUInteger)arg1;
- (id)_userSelection;
@property(readonly, nonatomic) AKAuthorizationUserResponse *userResponse;
@property(readonly, nonatomic) NSString *forwardingEmail;
@property(readonly, nonatomic) NSString *chosenEmail;
- (void)setGivenName:(id)arg1 familyName:(id)arg2;
- (id)initWithScopes:(id)arg1 userInformation:(id)arg2;

@end
