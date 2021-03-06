//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKSectionTableViewController.h>

#import <PassKitUI/PKAccountServiceAccountResolutionControllerDelegate-Protocol.h>

@class NSArray, NSString, PKAccount, PKAccountService, PKAccountServiceAccountResolutionController, PKInstallmentPlan, PKPaymentPass, PKSplashImageHeaderView;
@protocol PKPaymentDataProvider;

@interface PKInstallmentPlanHistoryViewController : PKSectionTableViewController <PKAccountServiceAccountResolutionControllerDelegate>
{
    PKAccount *_account;
    PKAccountService *_accountService;
    PKInstallmentPlan *_installmentPlan;
    PKPaymentPass *_paymentPass;
    PKAccountServiceAccountResolutionController *_resolutionController;
    id <PKPaymentDataProvider> _dataProvider;
    NSArray *_transactions;
    NSString *_deviceName;
    PKSplashImageHeaderView *_headerView;
    double _headerHeight;
}

// - (void).cxx_destruct;
- (void)_handleAccountChangedNotification:(id)arg1;
- (void)_presentBillPayment;
- (id)_makePaymentCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)_paymentHistoryCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)_progressCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)_totalCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)_paymentDetailsCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (void)_configureHeader;
- (void)_updateWithInstallmentPlan:(id)arg1;
- (void)_presentTransactionDetailsForTransaction:(id)arg1;
- (void)accountServiceAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (BOOL)shouldMapSection:(NSUInteger)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1 installmentPlan:(id)arg2 accountService:(id)arg3 paymentPass:(id)arg4 dataProvider:(id)arg5;

@end

