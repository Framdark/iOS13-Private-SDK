//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainSearchResults.h>

@class NSArray;

@interface SAAnswerSearchResults : SADomainSearchResults
{
}

+ (id)searchResultsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)searchResults;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSArray *results;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

