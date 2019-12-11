namespace Graph
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.splitContainer1 = new System.Windows.Forms.SplitContainer();
            this.listView1 = new System.Windows.Forms.ListView();
            this.listBox1 = new System.Windows.Forms.ListBox();
            this.createNewGButton = new System.Windows.Forms.Button();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.listView2 = new System.Windows.Forms.ListView();
            this.currentGraphLabel = new System.Windows.Forms.Label();
            this.addEdgeButton = new System.Windows.Forms.Button();
            this.loadGraphButton = new System.Windows.Forms.Button();
            this.loadGraphCB = new System.Windows.Forms.ComboBox();
            this.saveGraphButton = new System.Windows.Forms.Button();
            this.modifyEdgeButton = new System.Windows.Forms.Button();
            this.algorithmCB = new System.Windows.Forms.ComboBox();
            this.useAlgoButton = new System.Windows.Forms.Button();
            this.removeEdgeButton = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.splitContainer1)).BeginInit();
            this.splitContainer1.Panel1.SuspendLayout();
            this.splitContainer1.Panel2.SuspendLayout();
            this.splitContainer1.SuspendLayout();
            this.SuspendLayout();
            // 
            // splitContainer1
            // 
            this.splitContainer1.Dock = System.Windows.Forms.DockStyle.Fill;
            this.splitContainer1.Location = new System.Drawing.Point(0, 0);
            this.splitContainer1.Name = "splitContainer1";
            // 
            // splitContainer1.Panel1
            // 
            this.splitContainer1.Panel1.Controls.Add(this.removeEdgeButton);
            this.splitContainer1.Panel1.Controls.Add(this.algorithmCB);
            this.splitContainer1.Panel1.Controls.Add(this.useAlgoButton);
            this.splitContainer1.Panel1.Controls.Add(this.modifyEdgeButton);
            this.splitContainer1.Panel1.Controls.Add(this.saveGraphButton);
            this.splitContainer1.Panel1.Controls.Add(this.loadGraphCB);
            this.splitContainer1.Panel1.Controls.Add(this.loadGraphButton);
            this.splitContainer1.Panel1.Controls.Add(this.addEdgeButton);
            this.splitContainer1.Panel1.Controls.Add(this.currentGraphLabel);
            this.splitContainer1.Panel1.Controls.Add(this.label1);
            this.splitContainer1.Panel1.Controls.Add(this.textBox1);
            this.splitContainer1.Panel1.Controls.Add(this.createNewGButton);
            // 
            // splitContainer1.Panel2
            // 
            this.splitContainer1.Panel2.Controls.Add(this.listView2);
            this.splitContainer1.Panel2.Controls.Add(this.listBox1);
            this.splitContainer1.Panel2.Controls.Add(this.listView1);
            this.splitContainer1.Size = new System.Drawing.Size(800, 450);
            this.splitContainer1.SplitterDistance = 150;
            this.splitContainer1.TabIndex = 0;
            // 
            // listView1
            // 
            this.listView1.HideSelection = false;
            this.listView1.Location = new System.Drawing.Point(3, 3);
            this.listView1.Name = "listView1";
            this.listView1.Size = new System.Drawing.Size(461, 302);
            this.listView1.TabIndex = 0;
            this.listView1.UseCompatibleStateImageBehavior = false;
            // 
            // listBox1
            // 
            this.listBox1.FormattingEnabled = true;
            this.listBox1.Location = new System.Drawing.Point(470, 3);
            this.listBox1.Name = "listBox1";
            this.listBox1.Size = new System.Drawing.Size(173, 446);
            this.listBox1.TabIndex = 1;
            // 
            // createNewGButton
            // 
            this.createNewGButton.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.createNewGButton.Location = new System.Drawing.Point(3, 328);
            this.createNewGButton.Name = "createNewGButton";
            this.createNewGButton.Size = new System.Drawing.Size(144, 23);
            this.createNewGButton.TabIndex = 2;
            this.createNewGButton.Text = "Create New Graph";
            this.createNewGButton.UseVisualStyleBackColor = true;
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(3, 70);
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(144, 20);
            this.textBox1.TabIndex = 3;
            // 
            // label1
            // 
            this.label1.Location = new System.Drawing.Point(4, 39);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(143, 28);
            this.label1.TabIndex = 4;
            this.label1.Text = "Edge (V,V) or (V,V,W)";
            this.label1.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // listView2
            // 
            this.listView2.HideSelection = false;
            this.listView2.Location = new System.Drawing.Point(3, 311);
            this.listView2.Name = "listView2";
            this.listView2.Size = new System.Drawing.Size(461, 136);
            this.listView2.TabIndex = 2;
            this.listView2.UseCompatibleStateImageBehavior = false;
            // 
            // currentGraphLabel
            // 
            this.currentGraphLabel.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.currentGraphLabel.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.currentGraphLabel.Location = new System.Drawing.Point(4, 0);
            this.currentGraphLabel.Name = "currentGraphLabel";
            this.currentGraphLabel.Size = new System.Drawing.Size(143, 28);
            this.currentGraphLabel.TabIndex = 5;
            this.currentGraphLabel.Text = "No Graph Selected";
            this.currentGraphLabel.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // addEdgeButton
            // 
            this.addEdgeButton.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.addEdgeButton.Location = new System.Drawing.Point(3, 96);
            this.addEdgeButton.Name = "addEdgeButton";
            this.addEdgeButton.Size = new System.Drawing.Size(144, 23);
            this.addEdgeButton.TabIndex = 6;
            this.addEdgeButton.Text = "Add New Edge";
            this.addEdgeButton.UseVisualStyleBackColor = true;
            // 
            // loadGraphButton
            // 
            this.loadGraphButton.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.loadGraphButton.Location = new System.Drawing.Point(3, 384);
            this.loadGraphButton.Name = "loadGraphButton";
            this.loadGraphButton.Size = new System.Drawing.Size(144, 23);
            this.loadGraphButton.TabIndex = 7;
            this.loadGraphButton.Text = "Load Graph";
            this.loadGraphButton.UseVisualStyleBackColor = true;
            // 
            // loadGraphCB
            // 
            this.loadGraphCB.FormattingEnabled = true;
            this.loadGraphCB.Location = new System.Drawing.Point(3, 357);
            this.loadGraphCB.Name = "loadGraphCB";
            this.loadGraphCB.Size = new System.Drawing.Size(144, 21);
            this.loadGraphCB.TabIndex = 8;
            // 
            // saveGraphButton
            // 
            this.saveGraphButton.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.saveGraphButton.Location = new System.Drawing.Point(3, 413);
            this.saveGraphButton.Name = "saveGraphButton";
            this.saveGraphButton.Size = new System.Drawing.Size(144, 23);
            this.saveGraphButton.TabIndex = 9;
            this.saveGraphButton.Text = "Save Graph";
            this.saveGraphButton.UseVisualStyleBackColor = true;
            // 
            // modifyEdgeButton
            // 
            this.modifyEdgeButton.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.modifyEdgeButton.Location = new System.Drawing.Point(3, 125);
            this.modifyEdgeButton.Name = "modifyEdgeButton";
            this.modifyEdgeButton.Size = new System.Drawing.Size(144, 23);
            this.modifyEdgeButton.TabIndex = 10;
            this.modifyEdgeButton.Text = "Modify Edge";
            this.modifyEdgeButton.UseVisualStyleBackColor = true;
            // 
            // algorithmCB
            // 
            this.algorithmCB.FormattingEnabled = true;
            this.algorithmCB.Location = new System.Drawing.Point(3, 253);
            this.algorithmCB.Name = "algorithmCB";
            this.algorithmCB.Size = new System.Drawing.Size(144, 21);
            this.algorithmCB.TabIndex = 12;
            // 
            // useAlgoButton
            // 
            this.useAlgoButton.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.useAlgoButton.Location = new System.Drawing.Point(3, 280);
            this.useAlgoButton.Name = "useAlgoButton";
            this.useAlgoButton.Size = new System.Drawing.Size(144, 23);
            this.useAlgoButton.TabIndex = 11;
            this.useAlgoButton.Text = "Use Algorithm";
            this.useAlgoButton.UseVisualStyleBackColor = true;
            // 
            // removeEdgeButton
            // 
            this.removeEdgeButton.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.removeEdgeButton.Location = new System.Drawing.Point(3, 154);
            this.removeEdgeButton.Name = "removeEdgeButton";
            this.removeEdgeButton.Size = new System.Drawing.Size(144, 23);
            this.removeEdgeButton.TabIndex = 13;
            this.removeEdgeButton.Text = "Remove Edge";
            this.removeEdgeButton.UseVisualStyleBackColor = true;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.AutoScroll = true;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.splitContainer1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.splitContainer1.Panel1.ResumeLayout(false);
            this.splitContainer1.Panel1.PerformLayout();
            this.splitContainer1.Panel2.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.splitContainer1)).EndInit();
            this.splitContainer1.ResumeLayout(false);
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.SplitContainer splitContainer1;
        private System.Windows.Forms.ComboBox loadGraphCB;
        private System.Windows.Forms.Button loadGraphButton;
        private System.Windows.Forms.Button addEdgeButton;
        private System.Windows.Forms.Label currentGraphLabel;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.Button createNewGButton;
        private System.Windows.Forms.ListView listView2;
        private System.Windows.Forms.ListBox listBox1;
        private System.Windows.Forms.ListView listView1;
        private System.Windows.Forms.Button modifyEdgeButton;
        private System.Windows.Forms.Button saveGraphButton;
        private System.Windows.Forms.ComboBox algorithmCB;
        private System.Windows.Forms.Button useAlgoButton;
        private System.Windows.Forms.Button removeEdgeButton;
    }
}

