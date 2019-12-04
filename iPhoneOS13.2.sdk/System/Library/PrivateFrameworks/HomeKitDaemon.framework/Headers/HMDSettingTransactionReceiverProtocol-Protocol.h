//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@protocol HMDSettingConstraintModelProtocol, HMDSettingGroupModelProtocol, HMDSettingModelProtocol;

@protocol HMDSettingTransactionReceiverProtocol 
- (void)transactionSettingConstraintModelRemoved:(id <HMDSettingConstraintModelProtocol>)arg1 completion:(void (^)(HMBAction *))arg2;
- (void)transactionSettingConstraintModelUpdated:(id <HMDSettingConstraintModelProtocol>)arg1 previousModel:(id <HMDSettingConstraintModelProtocol>)arg2 completion:(void (^)(HMBAction *))arg3;
- (void)transactionSettingModelRemoved:(id <HMDSettingModelProtocol>)arg1 completion:(void (^)(HMBAction *))arg2;
- (void)transactionSettingModelUpdated:(id <HMDSettingModelProtocol>)arg1 previousModel:(id <HMDSettingModelProtocol>)arg2 completion:(void (^)(HMBAction *))arg3;
- (void)transactionSettingGroupModelRemoved:(id <HMDSettingGroupModelProtocol>)arg1 completion:(void (^)(HMBAction *))arg2;
- (void)transactionSettingGroupModelUpdated:(id <HMDSettingGroupModelProtocol>)arg1 previousModel:(id <HMDSettingGroupModelProtocol>)arg2 completion:(void (^)(HMBAction *))arg3;
@end
