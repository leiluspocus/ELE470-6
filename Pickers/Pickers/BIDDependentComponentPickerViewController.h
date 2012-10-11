//
//  BIDDependentComponentPickerViewController.h
//  Pickers
//
//  Created by Laïla Atrmouh on 09/10/12.
//  Copyright (c) 2012 URI. All rights reserved.
//

#import <UIKit/UIKit.h>

#define kStateComponent 0
#define kZipComponent 1

@interface BIDDependentComponentPickerViewController : UIViewController<UIPickerViewDelegate, UIPickerViewDataSource>

@property (strong, nonatomic) IBOutlet UIPickerView *picker;
@property (strong, nonatomic) NSDictionary *stateZips; @property (strong, nonatomic) NSArray *states;
@property (strong, nonatomic) NSArray *zips;

- (IBAction) buttonPressed;

@end
