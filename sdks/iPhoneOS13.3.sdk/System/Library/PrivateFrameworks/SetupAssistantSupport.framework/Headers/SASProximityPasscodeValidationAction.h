//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SetupAssistantSupport/SASProximityAction.h>

@class NSString;

@interface SASProximityPasscodeValidationAction : SASProximityAction
{
    BOOL _passcodeValid;
    NSString *_passcode;
}

+ (id)actionFromDictionary:(id)arg1;
+ (NSUInteger)actionID;
@property BOOL passcodeValid; // @synthesize passcodeValid=_passcodeValid;
@property(retain) NSString *passcode; // @synthesize passcode=_passcode;
// - (void).cxx_destruct;
- (void)setResponseFromData:(id)arg1;
- (id)responsePayload;
- (id)requestPayload;
- (BOOL)hasResponse;

@end

