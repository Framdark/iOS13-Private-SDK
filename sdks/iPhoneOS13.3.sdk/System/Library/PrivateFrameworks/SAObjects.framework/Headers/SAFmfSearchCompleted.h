//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSArray, NSNumber, NSURL;

@interface SAFmfSearchCompleted : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)searchCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)searchCompleted;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSURL *searchContext;
@property(copy, nonatomic) NSArray *fmfLocations;
@property(copy, nonatomic) NSNumber *atRequestedLocation;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
