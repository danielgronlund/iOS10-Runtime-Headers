/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UITriggerVC.framework/UITriggerVC
 */

@interface UITriggerTableViewController : UITableViewController <CSLUIUITriggerIDSProtocolResponse, IDSServiceDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSMutableArray * _UIProviders;
    IDSService * _idsService;
}

@property (nonatomic, retain) NSMutableArray *UIProviders;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IDSService *idsService;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)UIProviders;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)idsRequestUITriggerResponse:(id)arg1;
- (id)idsService;
- (void)idsUIProvidersResponse:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (bool)requestPluginList;
- (id)sendProtobufRequest:(id)arg1 type:(unsigned short)arg2 priority:(long long)arg3 expectsResponse:(bool)arg4 errorHandler:(id /* block */)arg5 withTimeout:(double)arg6;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)setIdsService:(id)arg1;
- (void)setUIProviders:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)triggerUIProvider:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
