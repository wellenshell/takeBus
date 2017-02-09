//
//  Header.h
//  LuxShare.Bus
//
//  Created by MingMing on 16/7/27.
//  Copyright © 2016年 DCS. All rights reserved.
//

#ifndef Header_h
#define Header_h
#define SCREENWIDTH [UIScreen mainScreen].bounds.size.width
#define SCREENHEIGHT [UIScreen mainScreen].bounds.size.height
//  提示框
#define KalertView  UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"确定要提交吗" message:nil preferredStyle:UIAlertControllerStyleAlert]; UIAlertAction *sure = [UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {ReFushViewController *refush = [[ReFushViewController alloc]init];[self presentViewController:refush animated:YES completion:nil];}];[alert addAction:sure];UIAlertAction *cancel = [UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:^(UIAlertAction * _Nonnull action) {return; }];[alert addAction:cancel];[self presentViewController:alert animated:YES completion:nil];


#import "LoginViewController.h"
#import "SDAutoLayout.h"
#import "BusNumberViewController.h"
#import "TakeBusPeopleViewController.h"
#import "ZBarSDK.h"
#import "ScanningViewController.h"
#import "AFNetworking.h"
#import "Request.h"
#import "Model.h"
#import "BusModel.h"
#import "BusNumberTableViewCell.h"
#import "PeopleModel.h"
#import "Public.h"
#import "keychainDeviceID.h"
#import "LXAlertView.h"
#import "MJRefresh.h"
#endif /* Header_h */
