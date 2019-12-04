//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NAIdentifiable-Protocol.h>

@class HMSetting, HMSettings, NSSet, NSString;

@interface _HFObservedAccessorySettingState : NSObject <NAIdentifiable>
{
    HMSettings *_settings;
    HMSetting *_setting;
    NSSet *_selectionOptions;
}

+ (id)na_identity;
+ (id)stateWithSettings:(id)arg1 forSetting:(id)arg2;
@property(readonly, copy, nonatomic) NSSet *selectionOptions; // @synthesize selectionOptions=_selectionOptions;
@property(readonly, nonatomic) HMSetting *setting; // @synthesize setting=_setting;
@property(readonly, nonatomic) HMSettings *settings; // @synthesize settings=_settings;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithSettings:(id)arg1 setting:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
