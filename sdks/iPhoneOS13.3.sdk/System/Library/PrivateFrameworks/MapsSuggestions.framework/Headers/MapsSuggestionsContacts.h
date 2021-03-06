//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsMeCardReader-Protocol.h>

@class CNContactStore, MapsSuggestionsLimitedDictionary, MapsSuggestionsMeCard, MapsSuggestionsObservers, NSString;
@protocol MapsSuggestionsNetworkRequester;

@interface MapsSuggestionsContacts : NSObject <MapsSuggestionsMeCardReader>
{
    struct Queue _queue;
    CNContactStore *_store;
    id <MapsSuggestionsNetworkRequester> _networkRequester;
    MapsSuggestionsLimitedDictionary *_cache;
    MapsSuggestionsObservers *_meCardObservers;
    MapsSuggestionsMeCard *_currMeCard;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
- (BOOL)readMeCardAddressStringsWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)_readMeCardAddressStringsWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)_receivedNotification:(id)arg1;
- (void)receivedNotification:(id)arg1;
- (BOOL)_reloadWithHandler:(id /* CDUnknownBlockType */)arg1;
- (BOOL)readMeCardWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)removeMeCardObserver:(id)arg1;
- (void)addMeCardObserver:(id)arg1;
- (void)_fetchMeCardShortcutsWithHandler:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) NSString *uniqueName;
- (void)dealloc;
- (id)initWithNetworkRequester:(id)arg1;

@end

