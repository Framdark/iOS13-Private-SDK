//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/WFMatchTextIntentHandling-Protocol.h>

@interface WFMatchTextIntentHandler : NSObject <WFMatchTextIntentHandling>
{
}

- (void)handleMatchText:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)resolveTextForMatchText:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)resolvePatternForMatchText:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)resolveCaseSensitiveForMatchText:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;

@end

