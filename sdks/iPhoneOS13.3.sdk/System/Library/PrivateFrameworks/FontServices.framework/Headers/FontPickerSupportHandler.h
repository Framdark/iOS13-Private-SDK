//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FontServices/FontServicesFontPickerSupportProtocol-Protocol.h>

@class NSXPCListener;

@interface FontPickerSupportHandler : NSObject <FontServicesFontPickerSupportProtocol, NSXPCListenerDelegate>
{
    NSXPCListener *_listener;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
// - (void).cxx_destruct;
- (void)locallyActivatedFontFiles:(id /* CDUnknownBlockType */)arg1;
- (void)activateFontsForFontPickerClient:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (void)ping:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)init;

@end

